/* Runtime dump - GQDWPListLabelTypeInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPListLabelTypeInfo : NSObject <GQDNameMappable>
{
    int mType;
    GQDWPTextLabel * mLabel;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (void)dealloc;
- (int)type;
- (NSString *)label;

@end
