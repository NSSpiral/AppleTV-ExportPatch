/* Runtime dump - MKMapAttribution
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapAttribution : NSObject
{
    NSAttributedString * _string;
    NSURL * _url;
}

@property (readonly, nonatomic) NSAttributedString * string;
@property (readonly, nonatomic) NSURL * url;
@property (readonly, nonatomic) NSAttributedString * disclosureArrow;

- (MKMapAttribution *)initWithStringAttributes:(NSAttributedString *)arg0 regionalAttributions:(id)arg1 globalAttributions:(id)arg2;
- (UIImage *)attributedStringWithImage:(UIImage *)arg0;
- (NSAttributedString *)disclosureArrow;
- (NSURL *)url;
- (NSAttributedString *)string;
- (void).cxx_destruct;

@end
