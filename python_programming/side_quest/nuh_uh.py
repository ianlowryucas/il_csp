#IL 6th csp time of day
import datetime
current=datetime.datetime.now()
hour=current.hour
if hour>=1 and hour<12:
    print('good morning')
elif hour>=12 and hour<20:
    print('good evening')
else: 
    print('good night')
