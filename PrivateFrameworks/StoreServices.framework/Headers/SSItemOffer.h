/* Runtime dump - SSItemOffer
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemOffer : NSObject <NSCopying>
{
    SSItem * _item;
    NSMutableDictionary * _offerDictionary;
    NSString * _offerIdentifier;
    NSArray * _supportedDevices;
}

@property (readonly, nonatomic) NSString * offerIdentifier;
@property (readonly, nonatomic) NSString * buyParameters;
@property (readonly, nonatomic) NSString * priceDisplay;
@property (readonly, nonatomic) NSString * actionDisplayName;
@property (readonly, nonatomic) char oneTapOffer;
@property (readonly, nonatomic) char preorder;
@property (readonly, nonatomic) SSItemMedia * offerMedia;
@property (readonly, nonatomic) SSDialog * confirmationDialog;
@property (readonly, nonatomic) SSDialog * successDialog;
@property (readonly, nonatomic) NSArray * supportedDevices;
@property (readonly, nonatomic) SSNetworkConstraints * networkConstraints;
@property (readonly, nonatomic) NSSet * accountIdentifiers;
@property (readonly, nonatomic) NSString * actionType;
@property (readonly, nonatomic) long long estimatedDiskSpaceNeeded;
@property (readonly, nonatomic) id requiredSoftwareCapabilities;
@property (readonly, nonatomic) char shouldShowPlusIcon;
@property (nonatomic) SSItem * _offerItem;

+ (SSItemOffer *)_preferredOfferIdentifiers;

- (char)isPreorder;
- (NSString *)buyParameters;
- (void)setBuyParameters:(NSString *)arg0;
- (void)dealloc;
- (SSItemOffer *)init;
- (NSString *)description;
- (SSItemOffer *)copyWithZone:(struct _NSZone *)arg0;
- (void *)valueForProperty:(NSString *)arg0;
- (NSString *)actionType;
- (SSNetworkConstraints *)networkConstraints;
- (NSObject *)playableMedia;
- (NSString *)offerIdentifier;
- (NSArray *)allowedToneStyles;
- (void)_setOfferItem:(NSObject *)arg0;
- (NSString *)priceDisplay;
- (SSItemOffer *)initWithOfferIdentifier:(NSString *)arg0 dictionary:(NSDictionary *)arg1;
- (SSItemMedia *)offerMedia;
- (NSString *)actionDisplayName;
- (SSDialog *)confirmationDialog;
- (id)documentCannotOpenDialog;
- (id)documentRequiredHandlers;
- (id)documentUTI;
- (char)isOneTapOffer;
- (SSDialog *)successDialog;
- (NSArray *)supportedDevices;
- (NSSet *)accountIdentifiers;
- (long long)estimatedDiskSpaceNeeded;
- (id)requiredSoftwareCapabilities;
- (void)setActionDisplayName:(NSString *)arg0;
- (void)setOneTapOffer:(char)arg0;
- (void)setPriceDisplay:(NSString *)arg0;
- (char)shouldShowPlusIcon;
- (SSItem *)_offerItem;

@end
