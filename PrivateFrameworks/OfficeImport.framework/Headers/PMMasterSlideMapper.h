/* Runtime dump - PMMasterSlideMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMMasterSlideMapper : CMMapper
{
    PDSlideBase * _slide;
}

- (void)dealloc;
- (PMMasterSlideMapper *)initWithPDSlide:(PDSlide *)arg0 parent:(NSObject *)arg1;
- (void)mapMasterGraphicsAt:(id)arg0 withState:(NSObject *)arg1;

@end
