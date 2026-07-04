/* Runtime dump - CoreDAVCopyOrMoveTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVCopyOrMoveTask : CoreDAVTask
{
    int _overwrite;
    NSURL * _destinationURL;
}

@property (nonatomic) int overwrite;
@property (retain, nonatomic) NSURL * destinationURL;

+ (CoreDAVCopyOrMoveTask *)stringFromOverwriteValue:(int)arg0;

- (NSURL *)destinationURL;
- (void)setDestinationURL:(NSURL *)arg0;
- (void)dealloc;
- (NSString *)description;
- (CoreDAVCopyOrMoveTask *)initWithURL:(NSString *)arg0;
- (NSData *)requestBody;
- (NSDictionary *)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (CoreDAVCopyOrMoveTask *)initWithSourceURL:(NSURL *)arg0 destinationURL:(NSURL *)arg1 andOverwrite:(int)arg2;
- (int)overwrite;
- (void)_callBackToDelegateWithResponses:(NSSet *)arg0 error:(NSError *)arg1;
- (CoreDAVCopyOrMoveTask *)initWithSourceURL:(NSURL *)arg0 destinationURL:(NSURL *)arg1;
- (void)setOverwrite:(int)arg0;

@end
