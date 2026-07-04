/* Runtime dump - ISPropertyListProvider
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISPropertyListProvider : ISProtocolDataProvider <NSCopying>

- (ISPropertyListProvider *)copyWithZone:(struct _NSZone *)arg0;
- (char)processDialogFromPropertyList:(NSArray *)arg0 returningError:(id *)arg1;
- (char)processPropertyList:(NSArray *)arg0 returningError:(id *)arg1;

@end
