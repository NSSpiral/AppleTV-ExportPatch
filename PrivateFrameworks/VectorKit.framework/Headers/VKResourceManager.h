/* Runtime dump - VKResourceManager
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKResourceManager : NSObject
{
    unsigned int _tileGroupIdentifier;
}

- (VKResourceManager *)initWithTileGroupIdentifier:(unsigned int)arg0;
- (NSString *)dataForResourceWithName:(NSString *)arg0;
- (char)isDevResourceWithName:(NSString *)arg0;
- (NSString *)pathForResourceWithName:(NSString *)arg0;
- (NSString *)_localNameForResourceName:(NSString *)arg0;

@end
