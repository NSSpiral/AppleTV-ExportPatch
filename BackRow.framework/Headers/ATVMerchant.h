/* Runtime dump - ATVMerchant
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMerchant.h>

@protocol ATVReadWriteFeedResource;

@class ATVDictionaryFeedResource, ATVPreferenceFeedResource, ATVVendorBag, BRController;
@interface ATVMerchant : BRMerchant <ATVReadWriteFeedResource>
{
    ATVPreferenceFeedResource * _preferenceResource;
    NSLock * _queueLock;
    ATVDictionaryFeedResource * _sessionResource;
    SKPaymentQueueClient * _paymentQueueClient;
    SKPaymentQueue * _paymentQueue;
    <ATVImageLoader> * _imageLoader;
    NSURL * _containerDirectoryURL;
}

@property (readonly, retain) ATVDictionaryFeedResource * sessionResource;
@property (readonly, retain) <ATVImageLoader> * imageLoader;
@property (readonly, retain, nonatomic) SKPaymentQueueClient * paymentQueueClient;
@property (readonly, retain, nonatomic) SKPaymentQueue * paymentQueue;
@property (readonly, retain, nonatomic) NSURL * containerDirectoryURL;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)assignToObject:(NSObject *)arg0;
- (void)setFeedResource:(<ATVReadWriteFeedResource> *)arg0 named:(NSString *)arg1;
- (id)controllerForScreensaverPhotosSelection;
- (id)feedResourceNamed:(NSString *)arg0;
- (void)removePaymentQueue;
- (ATVDictionaryFeedResource *)sessionResource;
- (void)clearFeedResources;
- (SKPaymentQueue *)paymentQueue;
- (NSURL *)containerDirectoryURL;
- (char)updateWithVendorBag:(ATVVendorBag *)arg0;
- (NSDictionary *)evaluatePlist:(id)arg0;
- (ATVPreferenceFeedResource *)_preferenceResource;
- (SKPaymentQueueClient *)paymentQueueClient;
- (void)dealloc;
- (NSString *)localizedStringForKey:(NSString *)arg0;
- (ATVMerchant *)initWithIdentifier:(NSString *)arg0;
- (<ATVImageLoader> *)imageLoader;
- (BRController *)rootController;

@end
