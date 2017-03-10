import csv

with open('OutlookContacts.csv', 'r+') as csv_file:
    reader = csv.DictReader(csv_file)
    print(str([row for row in reader]))
csv_file.close()
