ldapsearch -Q -S cn "uid=z*" cn | grep "cn:" | tail -r | cut -c 5-
