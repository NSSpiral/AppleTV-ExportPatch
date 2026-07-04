/* Runtime dump - GQDWPTab
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPTab : NSObject <GQDNameMappable>
{
    float mPosition;
    int mAlignment;
    struct __CFString * mLeader;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (struct __CFString *)leader;
- (void)dealloc;
- (float)position;
- (int)alignment;

@end
