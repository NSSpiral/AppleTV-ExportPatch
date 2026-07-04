/* Runtime dump - ODIHorizonalList3
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODIHorizonalList3 : NSObject
{
    unsigned int mMaxPointCount;
    ODIState * mState;
}

+ (char)mapIdentifier:(NSString *)arg0 state:(NSObject *)arg1;

- (ODIHorizonalList3 *)initWithState:(NSObject *)arg0;
- (void)mapRoofStyleFromPoint:(NSObject *)arg0 shape:(NSString *)arg1;
- (void)mapOnePillarStyleFromPoint:(NSObject *)arg0 shape:(NSString *)arg1;
- (void)mapPillarPoints:(id)arg0 bounds:(struct CGRect)arg1;
- (void)mapBaseStyleFromPoint:(NSObject *)arg0 shape:(NSString *)arg1;
- (void)setMaxPointCount:(unsigned int)arg0;
- (void)map;

@end
