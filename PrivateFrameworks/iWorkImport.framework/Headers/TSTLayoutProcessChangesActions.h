/* Runtime dump - TSTLayoutProcessChangesActions
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutProcessChangesActions : NSObject
{
    char mLayoutInvalidate;
    char mLayoutInvalidateProvider;
    char mLayoutInvalidateSize;
    char mLayoutInvalidateTableNameVisibility;
    char mLayoutSpacesInvalidateCoordinates;
    char mLayoutSpacesInvalidateTableOffsets;
    char mLayoutInvalidateChildren;
    char mLayoutUpdateChildren;
}

@property (nonatomic) char layoutInvalidate;
@property (nonatomic) char layoutInvalidateProvider;
@property (nonatomic) char layoutInvalidateSize;
@property (nonatomic) char layoutInvalidateTableNameVisibility;
@property (nonatomic) char layoutSpacesInvalidateCoordinates;
@property (nonatomic) char layoutSpacesInvalidateTableOffsets;
@property (nonatomic) char layoutInvalidateChildren;
@property (nonatomic) char layoutUpdateChildren;

- (char)layoutInvalidate;
- (void)setLayoutInvalidate:(char)arg0;
- (char)layoutInvalidateProvider;
- (void)setLayoutInvalidateProvider:(char)arg0;
- (char)layoutInvalidateSize;
- (void)setLayoutInvalidateSize:(char)arg0;
- (char)layoutInvalidateTableNameVisibility;
- (void)setLayoutInvalidateTableNameVisibility:(char)arg0;
- (char)layoutSpacesInvalidateCoordinates;
- (void)setLayoutSpacesInvalidateCoordinates:(char)arg0;
- (char)layoutSpacesInvalidateTableOffsets;
- (void)setLayoutSpacesInvalidateTableOffsets:(char)arg0;
- (char)layoutInvalidateChildren;
- (void)setLayoutInvalidateChildren:(char)arg0;
- (char)layoutUpdateChildren;
- (void)setLayoutUpdateChildren:(char)arg0;

@end
