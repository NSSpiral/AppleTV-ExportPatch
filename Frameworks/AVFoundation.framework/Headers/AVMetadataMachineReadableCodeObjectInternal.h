/* Runtime dump - AVMetadataMachineReadableCodeObjectInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataMachineReadableCodeObjectInternal : NSObject
{
    char decoded;
    NSArray * corners;
    NSString * stringValue;
    NSDictionary * basicDescriptor;
}

@property (retain) NSArray * corners;
@property (retain) NSString * stringValue;
@property (retain) NSDictionary * basicDescriptor;
@property char decoded;

- (void)setCorners:(NSArray *)arg0;
- (NSDictionary *)basicDescriptor;
- (void)setBasicDescriptor:(NSDictionary *)arg0;
- (char)decoded;
- (void)setDecoded:(char)arg0;
- (void)dealloc;
- (NSArray *)corners;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;

@end
