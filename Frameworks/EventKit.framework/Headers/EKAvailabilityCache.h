/* Runtime dump - EKAvailabilityCache
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAvailabilityCache : NSObject
{
    char _sourceIsInvalid;
    NSString * _accountID;
    char _sourceSupportsAvailabilityRequests;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableDictionary * _addressesToCachedSpanRanges;
    NSMutableDictionary * _ignoredEventIDsToAddressBasedCaches;
}

+ (char)_isValidStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1;
+ (void)_logRequestElapsedTime:(double)arg0 forNumberOfAddresses:(unsigned int)arg1;
+ (EKAvailabilityCache *)_generateEventKitSpansFromDataAccessExpressSpans:(id)arg0;
+ (int)_convertType:(int)arg0;

- (NSObject *)_dictionaryForIgnoredEventID:(NSObject *)arg0;
- (void)_handleResults:(NSArray *)arg0 resultsBlock:(id /* block */)arg1 ignoredEventID:(/* block */ id)arg2;
- (NSDate *)requestAvailabilityBetweenStartDate:(NSDate *)arg0 endDate:(NSDate *)arg1 ignoredEventID:(NSString *)arg2 addresses:(struct __CFArray * *)arg3 resultsBlock:(id /* block */)arg4 completionBlock:(/* block */ id)arg5;
- (void)cancelAvailabilityRequestWithID:(int)arg0;
- (void)dealloc;
- (NSString *)description;
- (EKAvailabilityCache *)initWithSource:(NSObject *)arg0;

@end
