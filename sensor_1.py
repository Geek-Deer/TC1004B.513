import firebase_admin
from firebase_admin import firestore
from firebase_admin import credentials
import time
from datetime import datetime
# Application Default Credentials are automaticaly created.

cred = credentials.Certificate('credential.json')
app = firebase_admin.initialize_app(cred)
db = firestore.client()

while(true):
    current_date = datetime.now()
    date = curent_date.strftime('%Y-%m-%d')
    hour = currnt_date.strftime('%H')

    print(date)
    print(hour)

    collection_name = u'sensor_1_{0}'.format(date)
    hour_ref = db.collection(collection_name)
    hour_ref.set({
        u'encendido' : 1,
        u'apagado' : 0
    })

    time.sleep(60)