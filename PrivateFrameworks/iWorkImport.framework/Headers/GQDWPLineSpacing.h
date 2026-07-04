/* Runtime dump - GQDWPLineSpacing
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDWPLineSpacing : NSObject <GQDNameMappable>
{
    int mMode;
    float mAmount;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (GQDWPLineSpacing *)init;
- (int)mode;
- (float)amount;

@end
