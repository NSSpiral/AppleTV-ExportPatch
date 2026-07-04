/* Runtime dump - MKYelpDeal
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKYelpDeal : NSObject <MKMapItemVendorDeal>
{
    NSString * identifier;
    NSString * title;
    NSString * urlString;
}

@property (retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * urlString;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)dealWithJSONObject:(NSObject *)arg0;

- (NSString *)urlString;
- (void)setUrlString:(NSString *)arg0;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)identifier;
- (NSString *)title;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;

@end
