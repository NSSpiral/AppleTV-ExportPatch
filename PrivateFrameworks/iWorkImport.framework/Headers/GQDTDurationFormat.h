/* Runtime dump - GQDTDurationFormat
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTDurationFormat : NSObject <GQDNameMappable>
{
    struct __CFString * mFormatString;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (GQDTDurationFormat *)initWithFormatString:(struct __CFString *)arg0;
- (void)dealloc;
- (struct __CFString *)formatString;

@end
