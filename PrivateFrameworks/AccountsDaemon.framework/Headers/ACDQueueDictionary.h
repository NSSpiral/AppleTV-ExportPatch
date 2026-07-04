/* Runtime dump - ACDQueueDictionary
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDQueueDictionary : NSObject
{
    NSMutableDictionary * _allQueuesByID;
}

- (ACDQueueDictionary *)init;
- (NSString *)description;
- (char)isEmpty;
- (void).cxx_destruct;
- (char)isQueueEmptyForKey:(NSString *)arg0;
- (void)addObject:(struct objc_method *)arg0 toQueueForKey:(NSString *)arg1;
- (NSString *)dequeueFirstObjectInQueueForKey:(NSString *)arg0;
- (NSString *)firstObjectInQueueForKey:(NSString *)arg0;
- (NSString *)dequeueAllObjectsInQueueForKey:(NSString *)arg0;
- (NSOperationQueue *)keyForRandomQueue;

@end
