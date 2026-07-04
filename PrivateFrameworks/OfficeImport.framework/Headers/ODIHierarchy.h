/* Runtime dump - ODIHierarchy
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIHierarchy : NSObject
{
    int mType;
    int mMaxMappableTreeDepth;
    ODIState * mState;
    NSMutableDictionary * mNodeInfoMap;
}

+ (char)mapIdentifier:(NSString *)arg0 state:(NSObject *)arg1;

- (void)dealloc;
- (struct ODIHRangeVector *)mapRangesForNode:(unsigned int)arg0;
- (void)mapLogicalBoundsWithXRanges:(struct ODIHRangeVector *)arg0;
- (NSObject *)infoForNode:(NSObject *)arg0;
- (ODIHierarchy *)initWithType:(int)arg0 state:(NSObject *)arg1;
- (void)createInfoForNode:(NSObject *)arg0 depth:(int)arg1;
- (void)setAbsolutePositionOfNode:(NSObject *)arg0 parentRow:(int)arg1 parentXOffset:(float)arg2;
- (struct CGRect)boundsOfNode:(NSObject *)arg0;
- (void)mapNode:(NSObject *)arg0;
- (void)map;

@end
