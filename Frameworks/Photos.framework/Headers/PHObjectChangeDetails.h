/* Runtime dump - PHObjectChangeDetails
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHObjectChangeDetails : NSObject
{
    PHObject * _objectBeforeChanges;
    PHObject * _objectAfterChanges;
    char _assetContentChanged;
}

@property (readonly) id objectBeforeChanges;
@property (readonly) id objectAfterChanges;
@property (readonly) char assetContentChanged;
@property (readonly) char objectWasDeleted;

- (PHObject *)objectBeforeChanges;
- (PHObjectChangeDetails *)initWithPHObject:(NSObject *)arg0 assetContentChanged:(char)arg1;
- (char)objectWasDeleted;
- (NSString *)description;
- (void).cxx_destruct;
- (PHObject *)objectAfterChanges;
- (char)assetContentChanged;
- (void)_calculateDiffs;

@end
