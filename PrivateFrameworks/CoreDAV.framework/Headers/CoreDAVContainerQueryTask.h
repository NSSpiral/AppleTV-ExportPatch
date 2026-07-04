/* Runtime dump - CoreDAVContainerQueryTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVContainerQueryTask : CoreDAVTask
{
    NSSet * _searchTerms;
    unsigned int _searchLimit;
    NSString * _appSpecificNamespace;
    NSString * _appSpecificQueryCommand;
    NSString * _appSpecificDataProp;
    Class _appSpecificDataItemClass;
}

@property (nonatomic) <CoreDAVContainerQueryTaskDelegate> * delegate;

+ (NSString *)_copySearchTermsFromSearchString:(NSString *)arg0;

- (void)dealloc;
- (NSData *)requestBody;
- (NSString *)httpMethod;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSObject *)copyDefaultParserForContentType:(NSObject *)arg0;
- (CoreDAVContainerQueryTask *)initWithSearchTerms:(NSSet *)arg0 searchLimit:(unsigned int)arg1 atURL:(NSURL *)arg2 appSpecificDataItemClass:(Class)arg3;
- (void)addFiltersToXMLData:(NSData *)arg0;
- (CoreDAVContainerQueryTask *)initWithSearchString:(NSString *)arg0 searchLimit:(unsigned int)arg1 atURL:(NSURL *)arg2 appSpecificDataItemClass:(Class)arg3;
- (CoreDAVContainerQueryTask *)_initWithSearchTerms:(NSSet *)arg0 searchLimit:(unsigned int)arg1 atURL:(NSURL *)arg2 appSpecificDataItemClass:(Class)arg3;

@end
