#!/usr/bin/env python3

# To extract data using web scraping with python, you need to follow these basic steps:

#    Find the URL that you want to scrape
#    Inspecting the Page
#    Find the data you want to extract
#    Write the code
#    Run the code and extract the data
#    Store the data in the required format 

import requests

url = "https://shibidp.colostate.edu/idp/profile/SAML2/Redirect/SSO?execution=e2s1"
creds = {'j_username' : 'mltechi', 'j_password' : '1349694ML0715ER!!'}

r = requests.post(url, data=creds)
print(r.text)
