/* Runtime dump - MSASAssetCollectionChange
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASAssetCollectionChange : NSObject
{
    char _wasDeleted;
    NSString * _GUID;
    NSString * _ctag;
}

@property (retain, nonatomic) NSString * GUID;
@property (retain, nonatomic) NSString * ctag;
@property (nonatomic) char wasDeleted;

- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)ctag;
- (char)wasDeleted;
- (void)setCtag:(NSString *)arg0;
- (void)setWasDeleted:(char)arg0;
- (void)setGUID:(NSSet *)arg0;
- (NSString *)GUID;

@end
