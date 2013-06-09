foo:
	@echo "Usage"
	@echo "make load       [load current database]"
	@echo "make dump       [dump current database]"
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
revert-all-components:
	drush features-revert-all
	drush ctools-export-revert context -y
	drush ctools-export-revert quicktabs -y
