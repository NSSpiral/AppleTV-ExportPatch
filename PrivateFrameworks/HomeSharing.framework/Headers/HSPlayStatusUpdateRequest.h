/* Runtime dump - HSPlayStatusUpdateRequest
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSPlayStatusUpdateRequest : HSRequest
{
    unsigned int _interfaceID;
    unsigned int _revisionID;
}

@property (readonly, nonatomic) unsigned int interfaceID;
@property (readonly, nonatomic) unsigned int revisionID;

- (char)isConcurrent;
- (double)timeoutInterval;
- (NSURLResponse *)canonicalResponseForResponse:(NSURLResponse *)arg0;
- (unsigned int)interfaceID;
- (HSPlayStatusUpdateRequest *)initWithInterfaceID:(unsigned int)arg0 revisionID:(unsigned int)arg1;
- (unsigned int)revisionID;

@end
