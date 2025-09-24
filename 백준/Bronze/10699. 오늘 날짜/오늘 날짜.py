from datetime import datetime, timedelta

seoul_now = datetime.utcnow() + timedelta(hours=9)
print(seoul_now.strftime('%Y-%m-%d'))
