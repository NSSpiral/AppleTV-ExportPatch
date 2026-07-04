/* Runtime dump - CHDDataValueProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDataValueProperties : NSObject <EDKeyedObject>
{
    CHDDataLabel * mDataLabel;
    CHDMarker * mMarker;
    unsigned int mDataValueIndex;
    OADGraphicProperties * mGraphicProperties;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSDictionary *)dataValueProperties;

- (void)dealloc;
- (CHDDataValueProperties *)init;
- (int)key;
- (NSDictionary *)graphicProperties;
- (CHDMarker *)marker;
- (void)setDataValueIndex:(unsigned int)arg0;
- (void)setGraphicProperties:(NSDictionary *)arg0;
- (void)setMarker:(CHDMarker *)arg0;
- (void)setDataLabel:(NSString *)arg0;
- (NSObject *)shallowCopyWithIndex:(unsigned int)arg0;
- (NSString *)dataLabel;
- (unsigned int)dataValueIndex;

@end
