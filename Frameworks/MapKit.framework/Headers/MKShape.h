/* Runtime dump - MKShape
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKShape : NSObject <MKAnnotation>
{
    NSString * _title;
    NSString * _subtitle;
}

@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * subtitle;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct ? coordinate;

- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (NSString *)subtitle;
- (void)setSubtitle:(NSString *)arg0;
- (void).cxx_destruct;
- (struct ?)coordinate;

@end
