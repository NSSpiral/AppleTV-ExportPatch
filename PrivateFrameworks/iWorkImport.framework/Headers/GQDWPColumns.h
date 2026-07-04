/* Runtime dump - GQDWPColumns
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPColumns : NSObject <GQDNameMappable>
{
    struct __CFArray * mColumns;
    char mEqualColumns;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (char)equalColumns;
- (void)dealloc;
- (struct __CFArray *)columns;

@end
