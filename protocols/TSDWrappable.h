/* Generated by RuntimeBrowser.
 */

@protocol TSDWrappable <NSObject>

@required

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInRoot;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (BOOL)hasAlpha;
- (BOOL)isHTMLWrap;
- (TSDAbstractLayout *)parent;
- (int)wrapDirection;
- (int)wrapFitType;
- (TSUBezierPath *)wrapPath;
- (TSDWrapSegments *)wrapSegments;
- (int)wrapType;

@end
