/* Runtime dump - CoreDAVPutTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPutTask : CoreDAVPostOrPutTask
{
    NSString * _nextETag;
}

@property (nonatomic) <CoreDAVTaskDelegate> * delegate;
@property (retain, nonatomic) NSString * nextETag;

- (void)dealloc;
- (NSString *)description;
- (NSString *)httpMethod;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSString *)nextETag;
- (void)setNextETag:(NSString *)arg0;

@end
