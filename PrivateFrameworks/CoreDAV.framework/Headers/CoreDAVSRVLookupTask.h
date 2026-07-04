/* Runtime dump - CoreDAVSRVLookupTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVSRVLookupTask : CoreDAVTask
{
    NSString * _serviceString;
    NSArray * _fetchedRecords;
    struct __CFHost * _host;
}

@property (retain, nonatomic) NSString * serviceString;
@property (retain, nonatomic) NSArray * fetchedRecords;
@property (nonatomic) struct __CFHost * host;

- (void)dealloc;
- (NSString *)description;
- (struct __CFHost *)host;
- (void)setHost:(struct __CFHost *)arg0;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (CoreDAVSRVLookupTask *)initWithServiceString:(NSString *)arg0;
- (NSArray *)fetchedRecords;
- (NSString *)serviceString;
- (void)performCoreDAVTask;
- (void)setServiceString:(NSString *)arg0;
- (void)setFetchedRecords:(NSArray *)arg0;

@end
