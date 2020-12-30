#!/usr/bin/python
import urllib

site = urllib.urlopen("http://businesscorp.com.br")
server = site.info()

#print site.read() #Exibe conteudo do site
print "Code_Status = ", site.getcode()
print "Url : ", site.geturl()
print "Server = ", server['Server']
