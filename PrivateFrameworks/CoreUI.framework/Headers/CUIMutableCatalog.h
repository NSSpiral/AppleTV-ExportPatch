/* Runtime dump - CUIMutableCatalog
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIMutableCatalog : CUICatalog
{
    id _checkRespondsTo;
    id _respondsToCheck;
}

- (void)dealloc;
- (CUIMutableCatalog *)init;
- (CUIMutableCatalog *)initWithName:(NSString *)arg0 fromBundle:(NSObject *)arg1 error:(id *)arg2;
- (CUIMutableCatalog *)initWithName:(NSString *)arg0;
- (void)removeImageNamed:(id)arg0 scale:(float)arg1 idiom:(int)arg2 subtype:(int)arg3;
- (void)removeImageNamed:(id)arg0 withDescription:(NSString *)arg1;
- (void)insertCGImage:(struct CGImage *)arg0 withName:(NSString *)arg1 andDescription:(NSString *)arg2;
- (NSString *)_baseKeyForName:(NSString *)arg0;
- (void)insertCGImage:(struct CGImage *)arg0 name:(NSString *)arg1 scale:(float)arg2 idiom:(int)arg3 subtype:(int)arg4;

@end
