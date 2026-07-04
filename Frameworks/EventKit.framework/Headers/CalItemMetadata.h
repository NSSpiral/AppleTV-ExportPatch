/* Runtime dump - CalItemMetadata
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface CalItemMetadata : NSObject <NSCoding>
{
    NSDictionary * _x_props;
    int _classification;
}

@property (retain) NSDictionary * x_props;
@property int classification;

+ (NSData *)metadataWithData:(NSData *)arg0;
+ (CalItemMetadata *)metadataWithICSComponent:(id)arg0;

- (int)classification;
- (void)setClassification:(int)arg0;
- (void)setX_props:(NSDictionary *)arg0;
- (CalItemMetadata *)initWithICSComponent:(ICSComponent *)arg0;
- (void)applyToComponent:(id)arg0;
- (NSDictionary *)dataRepresentationWithExistingMetaData:(NSData *)arg0;
- (NSDictionary *)x_props;
- (void)dealloc;
- (CalItemMetadata *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (CalItemMetadata *)init;

@end
