/* Runtime dump - HSBrowseRequest
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSBrowseRequest : HSRequest

+ (NSObject *)requestWithDatabaseID:(unsigned int)arg0 browseGroupType:(int)arg1;

- (NSURLResponse *)canonicalResponseForResponse:(NSURLResponse *)arg0;
- (NSObject *)_stringForBrowseGroupType:(int)arg0;
- (HSBrowseRequest *)initWithDatabaseID:(unsigned int)arg0 browseGroupType:(int)arg1;

@end
