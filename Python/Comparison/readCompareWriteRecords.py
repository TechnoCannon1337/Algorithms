import os
import os.path
import csv

def read_csv_file(file_path):
    #Reads a CSV file and returns a list of rows.
    with open(file_path, 'r') as file:
        reader = csv.reader(file)
        return list(reader)

def write_to_csv(file_path, rows):
    #Writes a list of rows to a CSV file.
    with open(file_path, 'a') as file:
        writer = csv.writer(file)
        writer.writerows(rows)

def read_compare_write_records(read_data, comparison_data, write_file):
    #Compares records and writes matches to an output file.
    matched_records = []
    for row in comparison_data:
        comp_column_0 = row[0]
        comp_column_1 = row[1]
        comp_column_2 = row[2]
        for row in read_data:
            read_column_0 = row[0]
            read_column_1 = row[1]
            read_column_2 = row[2]
            if read_column_0 == comp_column_0:
                matched_records.append([comp_column_1, read_column_2, comp_column_2])
    write_to_csv(write_file, matched_records)

# Read data from files
read_file = read_csv_file('readFile.csv')
compare_file = read_csv_file('compareFile.csv')

# Process and create new records based on matches
read_compare_write_records(read_file, compare_file, 'writeFile.csv')
