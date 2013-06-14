foo:
	@echo "Usage"
	@echo "make load       [load current database]"
	@echo "make dump       [dump current database]"
	@echo "make load-basic [load current database]"
	@echo "make dump-basic [dump current database]"
	@echo "make revert-all-components [revert all component (views,context, quicktabs)]"

dump:
	@echo "clearing cache ....."
	drush cc all
	@echo "taking dump to db.sql ....."
	drush sql-dump > db.sql
	@echo "Done"
load:
	@echo "Loading from db.sql ....."
	drush sqlc < db.sql
dump-basic:
	@echo "clearing cache ....."
	drush cc all
	@echo "taking dump to db-basic.sql ....."
	drush sql-dump > db-basic.sql
	@echo "Done"
load-basic:
	@echo "Loading from db-basic.sql ....."
	drush sqlc < db-basic.sql
revert-all-components:
	drush features-revert-all
	drush ctools-export-revert context -y
	drush ctools-export-revert quicktabs -y
