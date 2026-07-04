/* Runtime dump - SSDownloadMonitorItem
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadMonitorItem : NSObject <SSXPCCoding>
{
    NSString * _clientIdentifier;
    int _itemState;
    NSString * _representativeTitle;
    NSString * _statusString;
    int _totalNumberOfItems;
    unsigned int _transferTypes;
}

@property (copy, nonatomic) NSString * clientIdentifier;
@property (nonatomic) int itemState;
@property (copy, nonatomic) NSString * representativeTitle;
@property (copy, nonatomic) NSString * statusString;
@property (nonatomic) int totalNumberOfItems;
@property (nonatomic) unsigned int transferTypes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)clientIdentifier;
- (NSDictionary *)copyXPCEncoding;
- (SSDownloadMonitorItem *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (void)setClientIdentifier:(NSString *)arg0;
- (NSString *)statusString;
- (int)itemState;
- (void)setItemState:(int)arg0;
- (NSString *)representativeTitle;
- (void)setRepresentativeTitle:(NSString *)arg0;
- (void)setStatusString:(NSString *)arg0;
- (int)totalNumberOfItems;
- (void)setTotalNumberOfItems:(int)arg0;
- (unsigned int)transferTypes;
- (void)setTransferTypes:(unsigned int)arg0;

@end
