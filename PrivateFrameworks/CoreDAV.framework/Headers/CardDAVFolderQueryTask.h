/* Runtime dump - CardDAVFolderQueryTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CardDAVFolderQueryTask : CoreDAVContainerQueryTask

- (CardDAVFolderQueryTask *)initWithSearchTerms:(NSArray *)arg0 searchLimit:(unsigned int)arg1 atURL:(NSURL *)arg2 appSpecificDataItemClass:(Class)arg3;
- (void)addFiltersToXMLData:(NSData *)arg0;

@end
