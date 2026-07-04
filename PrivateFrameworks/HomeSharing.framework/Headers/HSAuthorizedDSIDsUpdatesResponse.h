/* Runtime dump - HSAuthorizedDSIDsUpdatesResponse
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSAuthorizedDSIDsUpdatesResponse : HSResponse
{
    NSArray * authorizedDSIDs;
}

@property (copy, nonatomic) NSArray * authorizedDSIDs;

- (NSArray *)authorizedDSIDs;
- (void).cxx_destruct;
- (void)setAuthorizedDSIDs:(NSArray *)arg0;

@end
