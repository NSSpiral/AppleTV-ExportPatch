/* Runtime dump - TSCH3DVAOLoader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DVAOLoader : TSCH3DResourceLoader

- (void)deactivateHandle:(id)arg0 insideContext:(NSObject *)arg1;
- (unsigned int)uploadDataBuffer:(NSObject *)arg0 handle:(_NSStdIOFileHandle *)arg1 insideSession:(NSObject *)arg2 config:(void *)arg3;
- (NSObject *)generateHandleWithConfig:(void *)arg0;
- (void)bindHandle:(id)arg0 config:(void *)arg1;
- (struct VAOLoadResult)activateObjectState:(struct ObjectState *)arg0 indices:(struct ObjectState)arg1 insideSession:(struct vector<TSCH3D::ObjectState::Lookup, std::__1::allocator<TSCH3D::ObjectState::Lookup> >)arg2;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;

@end
