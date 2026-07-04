/* Runtime dump - BRMerchant
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVVendorBag, BRAccountType, BRControl, BRMerchantInfo;
@interface BRMerchant : NSObject
{
    BRMerchantInfo * _info;
}

@property (retain) BRMerchantInfo * info;
@property char enabled;
@property (readonly, nonatomic) NSArray * appDefinitions;

+ (BRMerchant *)itms;
+ (BRMerchant *)merchantForControl:(BRControl *)arg0;
+ (BRMerchant *)merchantWithClosestAffinityToURL:(NSURL *)arg0;
+ (BRMerchant *)merchantForObject:(NSObject *)arg0;
+ (BRMerchant *)sedona;
+ (BRMerchant *)merchantForObject:(NSObject *)arg0 defaultMerchant:(id)arg1;
+ (BRMerchant *)flagstaff;
+ (BRMerchant *)merchantForControl:(BRControl *)arg0 defaultMerchant:(id)arg1;

- (void)decorateRequestProperties:(NSDictionary *)arg0;
- (NSURL *)generateRequestForURL:(NSURL *)arg0 headers:(NSDictionary *)arg1 method:(NSString *)arg2 body:(id /* block */)arg3;
- (Class)catalogAgent;
- (char)isEqualToMerchant:(id)arg0;
- (void)assignToControl:(BRControl *)arg0;
- (NSArray *)appDefinitions;
- (NSURL *)generateRequestForURL:(NSURL *)arg0 headers:(NSDictionary *)arg1 method:(NSString *)arg2;
- (char)assignToObject:(NSObject *)arg0;
- (<BRPlayerDelegate> *)playerDelegate;
- (char)updateWithVendorBag:(ATVVendorBag *)arg0;
- (NSDictionary *)evaluatePlist:(id)arg0;
- (char)hasAffinityToURL:(NSURL *)arg0;
- (NSError *)merchantErrorForError:(NSError *)arg0;
- (BRMerchant *)initWithVendorBag:(ATVVendorBag *)arg0;
- (NSURL *)generateRequestForURL:(NSURL *)arg0 headers:(NSDictionary *)arg1 method:(NSString *)arg2 body:(id /* block */)arg3 timeout:(double)arg4;
- (BRMerchant *)retain;
- (void)release;
- (void)dealloc;
- (BRMerchant *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (NSString *)description;
- (NSString *)localizedStringForKey:(NSString *)arg0;
- (NSString *)identifier;
- (void)setEnabled:(char)arg0;
- (BRMerchant *)copyWithZone:(struct _NSZone *)arg0;
- (BRMerchantInfo *)info;
- (char)enabled;
- (BRMerchant *)initWithIdentifier:(NSString *)arg0;
- (void)setInfo:(BRMerchantInfo *)arg0;
- (BRAccountType *)accountType;

@end
