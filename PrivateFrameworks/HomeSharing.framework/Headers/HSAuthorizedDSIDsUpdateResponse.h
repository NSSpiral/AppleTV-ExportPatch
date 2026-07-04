/* Runtime dump - HSAuthorizedDSIDsUpdateResponse
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSAuthorizedDSIDsUpdateResponse : HSResponse
{
    NSArray * authorizedDSIDs;
}

@property (copy, nonatomic) NSArray * authorizedDSIDs;

- (NSArray *)authorizedDSIDs;
- (void).cxx_destruct;
- (void)setAuthorizedDSIDs:(NSArray *)arg0;

@end
