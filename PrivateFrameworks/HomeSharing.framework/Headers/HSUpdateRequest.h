/* Runtime dump - HSUpdateRequest
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSUpdateRequest : HSRequest
{
    int _connectionType;
}

+ (HSUpdateRequest *)requestWithDatabaseRevision:(unsigned int)arg0 sessionID:(unsigned int)arg1 connectionType:(int)arg2;

- (char)isConcurrent;
- (double)timeoutInterval;
- (NSURLResponse *)canonicalResponseForResponse:(NSURLResponse *)arg0;
- (HSUpdateRequest *)initWithDatabaseRevision:(unsigned int)arg0 sessionID:(unsigned int)arg1 connectionType:(int)arg2;
- (id)_bodyDataForDatabaseRevision:(unsigned int)arg0 sessionID:(unsigned int)arg1;

@end
