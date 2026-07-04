/* Runtime dump - DAOofSettingsInfo
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAOofSettingsInfo : DAOofParams
{
    NSString * _requestID;
    <DAOofResponseDelegate> * _consumer;
}

@property (retain, nonatomic) NSString * requestID;
@property (weak, nonatomic) <DAOofResponseDelegate> * consumer;

- (NSString *)requestID;
- (void).cxx_destruct;
- (void)setRequestID:(NSString *)arg0;
- (<DAOofResponseDelegate> *)consumer;
- (void)setConsumer:(<DAOofResponseDelegate> *)arg0;

@end
