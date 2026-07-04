/* Runtime dump - GQDTSpiceTableModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTSpiceTableModel : GQDTTableModel

+ (struct StateSpec *)stateForReading;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg0;
- (int)setRowHeightsFromState:(NSObject *)arg0;
- (int)setColumnWidthsFromState:(NSObject *)arg0;
- (struct __CFArray *)createSizeArrayFromPositionVector:(struct vector<float, std::__1::allocator<float> > *)arg0;

@end
