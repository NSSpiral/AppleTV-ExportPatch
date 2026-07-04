/* Runtime dump - GQPStyleReader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQPStyleReader : NSObject <GQPObjectReader, GQPObjectHandler>
{
    int mStyleType;
    struct __CFArray * mEntries;
    GQDSStylesheet * mStylesheet;
    int mCurrentProperty;
    char mStyleIsIdentified;
    char mStyleIdentiferEqualsParentIdentifier;
    char * mIdentifier;
    char * mUid;
    char * mParentIdentifier;
    GQDSStyle * mStyle;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (GQPStyleReader *)initWithStyleType:(int)arg0;
- (int)beginReadingFromReader:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (int)doneReading:(id)arg0;
- (char)beginProperty:(char *)arg0;
- (void)handleObject:(NSObject *)arg0;
- (void)doneProperty;
- (void)handleBoolValue:(char)arg0;
- (void)handleIntValue:(int)arg0;
- (void)handleFloatValue:(float)arg0;
- (void)handleDoubleValue:(double)arg0;
- (NSObject *)createStyle;
- (void)dealloc;

@end
