/* Runtime dump - CoreDAVFolderContentsMultiGetTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVFolderContentsMultiGetTask : CoreDAVContainerMultiGetTask

- (id)copyAdditionalPropElements;
- (void)setAdditionalProperties:(NSDictionary *)arg0 onDataItem:(NSObject *)arg1;
- (CoreDAVFolderContentsMultiGetTask *)initWithURLs:(id)arg0 atContainerURL:(NSURL *)arg1 appSpecificDataItemClass:(Class)arg2;

@end
