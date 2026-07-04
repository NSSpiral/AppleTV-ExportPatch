/* Runtime dump - BRCVersionsFileProvider
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCVersionsFileProvider : BRCFileProvider
{
    NSMutableDictionary * _operationsByName;
}

- (BRCVersionsFileProvider *)initWithURL:(NSString *)arg0;
- (void).cxx_destruct;
- (void)dumpToContext:(NSObject *)arg0;
- (NSString *)_fileReactorID;
- (NSURL *)_physicalURLForURL:(NSURL *)arg0;
- (void)_provideItemAtURL:(NSURL *)arg0 toReaderWithID:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)_cancelProvidingItemAtURL:(NSURL *)arg0 toReaderWithID:(int)arg1;

@end
