/* Runtime dump - ESDObjectFactory
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ESDObjectFactory : NSObject
{
    struct EshObjectFactory * eshObjectFactory;
    NSMutableArray * eshObjectFactoryStack;
}

+ (NSObject *)threadLocalFactory;

- (void)dealloc;
- (ESDObjectFactory *)init;
- (struct EshObject *)createObjectWithType:(unsigned short)arg0;
- (struct EshObject *)createObjectWithType:(unsigned short)arg0 version:(unsigned short)arg1;
- (void)replaceHostEshFactoryWith:(struct EshObjectFactory *)arg0;
- (void)restoreHostEshFactory;
- (void)setEshFactory:(struct EshObjectFactory *)arg0;

@end
